//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTUserInfo : NSObject
{
    NSString *_topic;
    id _strongRef;
    id _weakRef;
}

+ (id)weakRef:(id)arg1;
+ (id)topic:(id)arg1;
+ (id)topic:(id)arg1 strongRef:(id)arg2 weakRef:(id)arg3;
@property(nonatomic) id weakRef; // @synthesize weakRef=_weakRef;
@property(retain, nonatomic) id strongRef; // @synthesize strongRef=_strongRef;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void)dealloc;
- (id)initWithTopic:(id)arg1 strongRef:(id)arg2 weakRef:(id)arg3;

@end

