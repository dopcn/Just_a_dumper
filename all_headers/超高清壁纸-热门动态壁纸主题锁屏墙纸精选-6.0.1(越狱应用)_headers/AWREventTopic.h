//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWREventTopic : NSObject
{
    NSString *_topicTitle;
    NSString *_topicID;
}

+ (id)topicWithDict:(id)arg1;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;

@end

