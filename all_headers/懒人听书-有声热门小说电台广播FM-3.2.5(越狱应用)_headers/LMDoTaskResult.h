//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBaseModel.h"

@class NSDictionary, NSString;

@interface LMDoTaskResult : LMBaseModel
{
    long long _point;
    long long _resultType;
    NSString *_showText;
    NSDictionary *_attchDict;
}

+ (id)parseObjectFromJSON:(id)arg1;
@property(retain, nonatomic) NSDictionary *attchDict; // @synthesize attchDict=_attchDict;
@property(retain, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(nonatomic) long long point; // @synthesize point=_point;
- (void).cxx_destruct;
- (id)processAttachString:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

