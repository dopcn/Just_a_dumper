//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSString, SPMCameraSetting, SPMCameraUISetting, SPMPhotoProcess, UIViewController;

@interface SPMPublishManager : NSObject <UIActionSheetDelegate>
{
    CDUnknownBlockType pickerHandler;
    SPMCameraSetting *cSetting;
    UIViewController *fromVC;
    id uploader;
    SPMPhotoProcess *_photoProcess;
    SPMCameraUISetting *_uiSetting;
}

+ (id)sharedManager;
@property(retain, nonatomic) SPMCameraUISetting *uiSetting; // @synthesize uiSetting=_uiSetting;
@property(retain, nonatomic) SPMPhotoProcess *photoProcess; // @synthesize photoProcess=_photoProcess;
- (void).cxx_destruct;
- (void)publishPhotoFromViewController:(id)arg1 withSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)interactFinished:(id)arg1 resultCode:(long long)arg2;
- (void)copySetting:(id)arg1;
- (void)imageEditFromViewController:(id)arg1 withSetting:(id)arg2 image:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)ablumSelectFromViewController:(id)arg1 withSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)takePhotoFromViewController:(id)arg1 withSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mutiSelectionPhotoWithViewController:(id)arg1 withSetting:(id)arg2;
- (void)photoProcessWithViewController:(id)arg1 cameraSetting:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

