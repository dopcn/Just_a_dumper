//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YXVideoObject : NSObject
{
    NSString *_videoUrl;
    NSString *_videoLowBandUrl;
}

+ (id)object;
@property(retain, nonatomic) NSString *videoLowBandUrl; // @synthesize videoLowBandUrl=_videoLowBandUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
- (_Bool)isValid;
- (id)stringifyToJSONString;
- (void)decodeFromNSDict:(id)arg1;
- (id)encodeToNSDict;
- (void)dealloc;
- (id)init;

@end

