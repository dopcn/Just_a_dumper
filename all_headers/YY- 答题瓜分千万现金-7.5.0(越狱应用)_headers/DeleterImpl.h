//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BS2SessionCredentials-Protocol.h"
#import "IDeleter-Protocol.h"

@class BS2TransferManager, NSString;
@protocol IBS2GetToken, IDeleterDelegate;

@interface DeleterImpl : NSObject <IDeleter, BS2SessionCredentials>
{
    NSString *_m_bucket;
    NSString *_m_file_key;
    NSString *_local_faile;
    id <IDeleterDelegate> _m_delegate;
    id <IBS2GetToken> _token_delegate;
    BS2TransferManager *_transferManager;
}

@property(retain, nonatomic) BS2TransferManager *transferManager; // @synthesize transferManager=_transferManager;
@property(nonatomic) __weak id <IBS2GetToken> token_delegate; // @synthesize token_delegate=_token_delegate;
@property(nonatomic) __weak id <IDeleterDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *local_faile; // @synthesize local_faile=_local_faile;
@property(retain, nonatomic) NSString *m_file_key; // @synthesize m_file_key=_m_file_key;
@property(retain, nonatomic) NSString *m_bucket; // @synthesize m_bucket=_m_bucket;
- (void).cxx_destruct;
- (id)getSessionTokenForBucket:(id)arg1 key:(id)arg2 method:(id)arg3 error:(id *)arg4;
- (id)getDelegate;
- (id)getFileKey;
- (id)getBucket;
- (int)deleteFile;
- (id)init:(id)arg1 key:(id)arg2 token_delegate:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

