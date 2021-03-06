//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class NSString, UIPopoverController, UIViewController, UIWebView;

@interface BaiduMobAdCameraManager : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate>
{
    UIWebView *_webView;
    NSString *_jsToken;
    struct CGSize _targetSize;
    long long _quality;
    _Bool _returnDataUrl;
    _Bool _returnFileUrl;
    _Bool _saveToAlbum;
    UIViewController *_innerController;
    UIPopoverController *_popoverController;
}

+ (void)removeManagerForWebView:(id)arg1;
+ (id)getManagerForWebView:(id)arg1;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIViewController *innerController; // @synthesize innerController=_innerController;
@property(retain, nonatomic) NSString *jsToken; // @synthesize jsToken=_jsToken;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)imageByScalingAndCroppingForSize:(id)arg1 toSize:(struct CGSize)arg2;
- (id)imageByScalingNotCroppingForSize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)takePicture:(id)arg1 option:(id)arg2;
- (void)removeInnerController;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

