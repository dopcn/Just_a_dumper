//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCachedObject.h"

@class NSString;

@interface FMAccountExtraInfo : FMCachedObject
{
    _Bool _docOpen;
    long long _accountId;
    long long _docNewCnt;
    NSString *_docSid;
    NSString *_docKey;
}

+ (unsigned long long)cacheLevel;
+ (id)defaultValues;
+ (id)columnMapping;
+ (id)primaryKey;
+ (id)tableName;
+ (id)dbName;
@property(retain, nonatomic) NSString *docKey; // @synthesize docKey=_docKey;
@property(retain, nonatomic) NSString *docSid; // @synthesize docSid=_docSid;
@property(nonatomic) _Bool docOpen; // @synthesize docOpen=_docOpen;
@property(nonatomic) long long docNewCnt; // @synthesize docNewCnt=_docNewCnt;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (id)init;

@end

