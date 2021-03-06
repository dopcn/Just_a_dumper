//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AddObjectViewControllerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WPSInsertBox-Protocol.h"

@class AddObjectViewController, NSString, UIImagePickerController, UIViewController;
@protocol WPSInsertBoxDelegate;

@interface WPSPhoneInsertBox : NSObject <WPSInsertBox, AddObjectViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _isChangeImage;
    AddObjectViewController *_viewController;
    UIImagePickerController *_camera;
    long long _orignalOritentation;
    UIViewController *_rootController;
    id <WPSInsertBoxDelegate> _delegate;
}

@property(nonatomic) _Bool isChangeImage; // @synthesize isChangeImage=_isChangeImage;
@property(nonatomic) id <WPSInsertBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
@property(nonatomic) long long orignalOritentation; // @synthesize orignalOritentation=_orignalOritentation;
@property(retain, nonatomic) UIImagePickerController *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) AddObjectViewController *viewController; // @synthesize viewController=_viewController;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)addObjectViewControllerDidPressCameraButton:(id)arg1;
- (void)addObjectViewController:(id)arg1 didSelectImage:(id)arg2 imageReferenceURL:(id)arg3;
- (void)sendAddImageMessageWithImage:(id)arg1 imageReferenceURL:(id)arg2;
- (void)addObjectViewController:(id)arg1 didSelectTextBoxStyleIndex:(int)arg2;
- (_Bool)isPopoverVisible;
- (id)popoverControllerForPop;
- (void)hide;
- (void)updateFromRect:(struct CGRect)arg1;
- (void)showFromRectWithoutTextbox:(struct CGRect)arg1;
- (void)showFromRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithRootController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

