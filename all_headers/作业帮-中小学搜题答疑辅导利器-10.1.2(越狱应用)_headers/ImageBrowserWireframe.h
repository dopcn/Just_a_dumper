//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FocusImageAnimationCompleteHandler-Protocol.h"

@class ImageBrowserPresenter, NSString, PhotoModalPresentationDelegate;

@interface ImageBrowserWireframe : NSObject <FocusImageAnimationCompleteHandler>
{
    ImageBrowserPresenter *_imagePresenter;
    PhotoModalPresentationDelegate *_photoModalPresentationDelegate;
}

@property(retain, nonatomic) PhotoModalPresentationDelegate *photoModalPresentationDelegate; // @synthesize photoModalPresentationDelegate=_photoModalPresentationDelegate;
@property(retain, nonatomic) ImageBrowserPresenter *imagePresenter; // @synthesize imagePresenter=_imagePresenter;
- (void).cxx_destruct;
- (void)didFinishDismissViewerController;
- (void)showImageBrowserFrom:(id)arg1 from:(id)arg2 initIndex:(long long)arg3 output:(id)arg4 configParam:(id)arg5;
- (void)showImageBrowserFrom:(id)arg1 from:(id)arg2 initIndex:(long long)arg3 output:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

