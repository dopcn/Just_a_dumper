//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PESyncStreamAdapter-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, QQPimContactDB;

@interface PESyncHeadImageAdapter : NSObject <PESyncStreamAdapter>
{
    QQPimContactDB *_contactDB;
    long long _currentPos;
    long long _allCount;
    NSMutableArray *_sendingList;
    NSString *_tempMapFilePath;
    NSString *_tempImageDir;
    NSMutableDictionary *_tempMapTableDic;
    long long _tempDownHeadNum;
    unsigned long long _tempHeadImageCacheSize;
}

@property(nonatomic) unsigned long long tempHeadImageCacheSize; // @synthesize tempHeadImageCacheSize=_tempHeadImageCacheSize;
@property(nonatomic) long long tempDownHeadNum; // @synthesize tempDownHeadNum=_tempDownHeadNum;
@property(retain, nonatomic) NSMutableDictionary *tempMapTableDic; // @synthesize tempMapTableDic=_tempMapTableDic;
@property(retain, nonatomic) NSString *tempImageDir; // @synthesize tempImageDir=_tempImageDir;
@property(retain, nonatomic) NSString *tempMapFilePath; // @synthesize tempMapFilePath=_tempMapFilePath;
@property(retain, nonatomic) NSMutableArray *sendingList; // @synthesize sendingList=_sendingList;
@property(nonatomic) long long allCount; // @synthesize allCount=_allCount;
@property(nonatomic) long long currentPos; // @synthesize currentPos=_currentPos;
@property(retain, nonatomic) QQPimContactDB *contactDB; // @synthesize contactDB=_contactDB;
- (void).cxx_destruct;
- (long long)addDatas:(id)arg1 retNewMd5:(id *)arg2;
- (id)getClientIdsFromMD5:(id)arg1;
- (long long)GetCurData:(id *)arg1 andMd5String:(id *)arg2;
- (long long)syncRETDataType;
- (long long)syncDataType;
- (long long)getToDownloadNum;
- (long long)count;
- (_Bool)seekNext;
- (_Bool)isAtEnd;
- (long long)progress;
- (long long)doOnHandleRecvDataEndRet:(id)arg1 andDataType:(long long)arg2;
- (long long)doOnsyncEnd;
- (long long)doOnSyncInit:(id *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

