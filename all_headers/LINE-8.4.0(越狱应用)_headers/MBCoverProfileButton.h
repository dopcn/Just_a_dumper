//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBURLImageButton.h"

@class MBActor;

@interface MBCoverProfileButton : MBURLImageButton
{
    MBActor *mActor;
    CDUnknownBlockType mImageCallback;
}

+ (id)coverProfileButton;
@property(retain, nonatomic) MBActor *actor; // @synthesize actor=mActor;
- (void).cxx_destruct;
- (void)setProfileImage;
- (void)actorDidLoadImage:(id)arg1;
- (void)actorDidLoadNickname:(id)arg1;
- (void)setupWithActor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

