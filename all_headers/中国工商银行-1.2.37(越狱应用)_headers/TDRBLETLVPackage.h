//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TDRBLETLVPackage : NSObject
{
}

+ (_Bool)TDRParseManufacture:(id)arg1 outPut:(id)arg2;
+ (_Bool)VerifyCRC:(id)arg1 md5Data:(id)arg2;
+ (_Bool)TDRParseBLEPackage:(id)arg1 tag:(unsigned char)arg2 outData:(id)arg3;
+ (id)TDRHexStringFromData:(id)arg1;
+ (id)md5DataDigest:(id)arg1;
+ (id)md5Digest:(id)arg1;
+ (id)md5HexDigest:(id)arg1;

@end

