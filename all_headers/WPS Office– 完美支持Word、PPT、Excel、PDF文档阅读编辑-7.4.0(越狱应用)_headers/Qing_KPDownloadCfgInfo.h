//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QingDataInfoBase.h"

#import "QingDataInfoBaseDelegate-Protocol.h"

@class NSArray, NSString;

@interface Qing_KPDownloadCfgInfo : QingDataInfoBase <QingDataInfoBaseDelegate>
{
    NSString *_secure_key;
    NSString *_file_sha1;
    NSArray *_blocks;
}

+ (id)arrayIdentifier;
+ (id)singleIdentifier;
@property(retain, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) NSString *file_sha1; // @synthesize file_sha1=_file_sha1;
@property(retain, nonatomic) NSString *secure_key; // @synthesize secure_key=_secure_key;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

