//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FeedbackItem : NSObject
{
    double create_utc;
    NSString *content;
    NSString *author;
    long long feedbackID;
}

+ (id)itemWithDictionary:(id)arg1;
@property(nonatomic) long long feedbackID; // @synthesize feedbackID;
@property(retain, nonatomic) NSString *author; // @synthesize author;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(nonatomic) double create_utc; // @synthesize create_utc;
- (void)dealloc;

@end

