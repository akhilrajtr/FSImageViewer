//  FSImageViewer
//
//  Created by Felix Schulze on 8/26/2013.
//  Copyright 2013 Felix Schulze. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

/// FSImage represents an abstract image object with URL, title and the image object.
@protocol FSImage <NSObject>

/// The remote image URL
@property(strong, nonatomic, readonly) NSURL *URL;
/// The title of the image - is displayed as overlay.
@property(strong, nonatomic, readonly) NSString *title;
/// The image size
@property(assign, nonatomic) CGSize size;
/// The UIImage representation - set directly if not from remote.
@property(strong, nonatomic) UIImage *image;
/// true if the image download failed.
@property(assign, nonatomic, getter=didFail) BOOL failed;
/// This string willshows as an overlay at bottom of image
@property(strong, nonatomic) NSString *overlayString;
/// Note on the image
@property(strong, nonatomic) NSString *notes;
/// True if the image is private
@property(assign, nonatomic, getter=isPrivate) BOOL privateImage;
/// A unique id of image
@property(strong, nonatomic) NSString *imageId;
/// True if the private/public status can edit
@property(assign, nonatomic, getter=isEditable) BOOL editable;
/// Method checks overlay string to decide details present or not
- (BOOL)isImageHaveDetails;


@end