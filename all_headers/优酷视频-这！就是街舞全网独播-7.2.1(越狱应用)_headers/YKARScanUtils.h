//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YKARScanUtils : NSObject
{
}

+ (void)executeForegroundWithBlock:(CDUnknownBlockType)arg1;
+ (void)executeBackgroundWithBlock:(CDUnknownBlockType)arg1;
+ (void)executeBlock:(CDUnknownBlockType)arg1 after:(double)arg2 when:(CDUnknownBlockType)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forSize:(struct CGSize)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forWidth:(double)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2;
+ (double)valueAfterScale:(double)arg1 minRatio:(double)arg2;
+ (double)valueAfterScale:(double)arg1;
+ (_Bool)isIOS7;
+ (id)sortedFilesByDate:(id)arg1 fileAttributesDict:(id *)arg2;
+ (id)listDirFiles:(id)arg1 withSuffix:(id)arg2;
+ (id)ARScanDocumentPath;

@end

