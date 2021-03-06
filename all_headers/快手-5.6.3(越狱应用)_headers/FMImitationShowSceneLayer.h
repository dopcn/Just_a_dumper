//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSceneLayer.h"

#import "FMPlaybackControllableScene-Protocol.h"

@class FMImitationShowResource, FMPictureInPictureFilter, KSGPUMovie, NSString;

@interface FMImitationShowSceneLayer : FMSceneLayer <FMPlaybackControllableScene>
{
    FMImitationShowResource *_imitationShowResource;
    KSGPUMovie *_movie;
    FMPictureInPictureFilter *_pipFilter;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(retain, nonatomic) FMPictureInPictureFilter *pipFilter; // @synthesize pipFilter=_pipFilter;
@property(retain, nonatomic) KSGPUMovie *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) FMImitationShowResource *imitationShowResource; // @synthesize imitationShowResource=_imitationShowResource;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 touchPosition:(struct CGPoint)arg3;
- (void)resume;
- (void)pause;
- (void)clear;
- (void)setupFilterWithURL:(id)arg1;
- (id)sceneFilter;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

