//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface YXAppExtendObject : NSObject
{
    NSString *_url;
    NSString *_extInfo;
    NSData *_fileData;
}

+ (id)object;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (_Bool)isValid;
- (id)stringifyToJSONString;
- (void)decodeFromNSDict:(id)arg1;
- (id)encodeToNSDict;
- (void)dealloc;
- (id)init;

@end

