//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMBasePostComponent.h"

@class FMEssayMultiMediaComponent, FMPostFishpondSelectComponent, FMPostLocationComponent, FMPostSelectUserTagComponent, FMPostSubjectContentComponent;
@protocol FMPostEssayComponentDelegate;

@interface FMPostEssayComponent : FMBasePostComponent
{
    id <FMPostEssayComponentDelegate> _delegate;
    FMPostSubjectContentComponent *_contentComponent;
    FMEssayMultiMediaComponent *_mediaComponent;
    FMPostLocationComponent *_locationComponent;
    FMPostSelectUserTagComponent *_userTagComponent;
    FMPostFishpondSelectComponent *_fishpondComponent;
}

@property(retain, nonatomic) FMPostFishpondSelectComponent *fishpondComponent; // @synthesize fishpondComponent=_fishpondComponent;
@property(retain, nonatomic) FMPostSelectUserTagComponent *userTagComponent; // @synthesize userTagComponent=_userTagComponent;
@property(retain, nonatomic) FMPostLocationComponent *locationComponent; // @synthesize locationComponent=_locationComponent;
@property(retain, nonatomic) FMEssayMultiMediaComponent *mediaComponent; // @synthesize mediaComponent=_mediaComponent;
@property(retain, nonatomic) FMPostSubjectContentComponent *contentComponent; // @synthesize contentComponent=_contentComponent;
@property(nonatomic) __weak id <FMPostEssayComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestPost;
- (void)requestData;
- (void)composeItemDO:(id)arg1;
- (void)setupWithItemDO:(id)arg1;
- (void)requestEssayItem;
- (id)componentsAtSection:(long long)arg1;
- (unsigned long long)generalPostType;
- (void)urlHandlerWithQuery:(id)arg1 nativeParams:(id)arg2;
- (id)init;

@end

