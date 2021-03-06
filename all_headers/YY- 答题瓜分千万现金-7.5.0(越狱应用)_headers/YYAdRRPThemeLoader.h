//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YYWebResourceDownloadOperation;

@interface YYAdRRPThemeLoader : NSObject
{
    YYWebResourceDownloadOperation *_currentOperation;
}

+ (_Bool)isExistCaches;
+ (void)cleanCaches;
@property(nonatomic) __weak YYWebResourceDownloadOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
- (void).cxx_destruct;
- (_Bool)_copyFileFromPath:(id)arg1 toPath:(id)arg2;
- (_Bool)_unzipPath:(id)arg1 toPath:(id)arg2 password:(id)arg3;
- (_Bool)_writeChacheHashWithURL:(id)arg1 webZipType:(unsigned long long)arg2;
- (unsigned long long)_getChacheHashWithWithURL:(id)arg1 webZipType:(unsigned long long)arg2;
- (id)_getCacheHashKeyWithURL:(id)arg1 webZipType:(unsigned long long)arg2;
- (id)_getCacheHashDictionary;
- (void)loadWebZipWithURL:(id)arg1 webZipType:(unsigned long long)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

