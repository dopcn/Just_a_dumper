//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface CDActivityNotice : NSObject <NSCoding, NSCopying>
{
    double _fromUpdateTime;
    NSString *_content;
    NSString *_title;
    long long _editNoticeState;
    NSString *_updateTime;
}

+ (id)intervalToString:(double)arg1;
+ (id)modelObjectWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) long long editNoticeState; // @synthesize editNoticeState=_editNoticeState;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) double fromUpdateTime; // @synthesize fromUpdateTime=_fromUpdateTime;
- (void).cxx_destruct;
- (_Bool)canPublishNotice;
- (_Bool)lateThanMinutes:(long long)arg1;
- (_Bool)isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

