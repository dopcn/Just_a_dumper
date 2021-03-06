//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ELBaseModel.h"

#import "ELLiveTopicTagProtocol-Protocol.h"

@class NSArray, NSString;

@interface ELLiveTopicModel : ELBaseModel <ELLiveTopicTagProtocol>
{
    NSString *_topicTitle;
    NSString *_topicId;
    NSArray *_headPhotoList;
    NSString *_topicDescription;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (void)topicLiveListWithTopicID:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)topicListWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *topicDescription; // @synthesize topicDescription=_topicDescription;
@property(copy, nonatomic) NSArray *headPhotoList; // @synthesize headPhotoList=_headPhotoList;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
- (void).cxx_destruct;
- (id)tagText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

