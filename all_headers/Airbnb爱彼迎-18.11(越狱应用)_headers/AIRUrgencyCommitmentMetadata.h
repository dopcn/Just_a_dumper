//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString;

@interface AIRUrgencyCommitmentMetadata : AIRModel
{
    NSString *_body;
    NSString *_contextualMessage;
    NSString *_headline;
    NSString *_messageType;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
@property(readonly, copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *contextualMessage; // @synthesize contextualMessage=_contextualMessage;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;

@end

