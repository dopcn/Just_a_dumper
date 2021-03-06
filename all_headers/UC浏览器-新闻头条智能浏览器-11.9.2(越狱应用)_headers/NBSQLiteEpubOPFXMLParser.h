//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBEpubOPFXMLBasicParser.h"

@class NBEpubResources, NSArray, NSString;

@interface NBSQLiteEpubOPFXMLParser : NBEpubOPFXMLBasicParser
{
    NSString *_litePacketCoverURLKey;
    NSString *_litePacketImageWidthKey;
    NSString *_litePacketImageHeightKey;
    NSArray *_litePacketCoverSuffixes;
    NBEpubResources *_unresolveImageResources;
    long long _coverFileConfigSeperaterCount;
}

@property(nonatomic) long long coverFileConfigSeperaterCount; // @synthesize coverFileConfigSeperaterCount=_coverFileConfigSeperaterCount;
@property(retain, nonatomic) NBEpubResources *unresolveImageResources; // @synthesize unresolveImageResources=_unresolveImageResources;
@property(retain, nonatomic) NSArray *litePacketCoverSuffixes; // @synthesize litePacketCoverSuffixes=_litePacketCoverSuffixes;
@property(copy, nonatomic) NSString *litePacketImageHeightKey; // @synthesize litePacketImageHeightKey=_litePacketImageHeightKey;
@property(copy, nonatomic) NSString *litePacketImageWidthKey; // @synthesize litePacketImageWidthKey=_litePacketImageWidthKey;
@property(copy, nonatomic) NSString *litePacketCoverURLKey; // @synthesize litePacketCoverURLKey=_litePacketCoverURLKey;
- (id)filePathByDeletingLnkFileSuffix:(id)arg1;
- (void)saveImageRemoteMappingFileToDiskIfNeeded;
- (id)imageFileConfigForFileAtPath:(id)arg1;
- (void)parseImageFileConfigForResourceIfNeeded:(id)arg1;
- (id)replacementImageFileSuffixForPath:(id)arg1;
- (void)removeOriginalCoverImageIfNeeded;
- (void)parserDidEndDocument:(id)arg1;
- (void)processImageResource:(id)arg1 isCover:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

