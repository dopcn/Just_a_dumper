//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPDataController.h"

@class NSString, TopicInfo;

@interface PPVoteDataController : PPDataController
{
    TopicInfo *_topicInfo;
    NSString *_errInfo;
}

@property(retain, nonatomic) NSString *errInfo; // @synthesize errInfo=_errInfo;
@property(retain, nonatomic) TopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
- (void).cxx_destruct;
- (_Bool)parseContent:(id)arg1;
- (void)requestWithTopicId:(id)arg1 andOptionId:(id)arg2;
- (id)requestPath;
- (id)initWithDelegate:(id)arg1;

@end

