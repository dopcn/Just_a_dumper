//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RKZipFileArchiveEntry-Protocol.h"

@class NSData, NSDate, NSInputStream, NSString, RKZipFileArchive;

@interface _RKZipFileArchiveEntry : NSObject <RKZipFileArchiveEntry>
{
    RKZipFileArchive *_archive;
    const CDStruct_0c6b00c1 *_centralDirectoryHeader;
    const CDStruct_baaff5e0 *_localFileHeader;
}

@property(readonly, nonatomic) const CDStruct_baaff5e0 *localFileHeader; // @synthesize localFileHeader=_localFileHeader;
@property(readonly, nonatomic) const CDStruct_0c6b00c1 *centralDirectoryHeader; // @synthesize centralDirectoryHeader=_centralDirectoryHeader;
@property(readonly, nonatomic) __weak RKZipFileArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSInputStream *stream;
@property(readonly, nonatomic) NSData *rawData;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
@property(readonly, nonatomic) unsigned short fileMode;
@property(readonly, nonatomic) unsigned long long decompressedSize;
@property(readonly, nonatomic) unsigned long long compressedSize;
@property(readonly, nonatomic) unsigned long long crc32;
@property(readonly, nonatomic) unsigned short compressionMethod;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) NSString *filename;
- (id)initWithArchive:(id)arg1 centralDirectoryHeader:(const CDStruct_0c6b00c1 *)arg2 localFileHeader:(const CDStruct_baaff5e0 *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

