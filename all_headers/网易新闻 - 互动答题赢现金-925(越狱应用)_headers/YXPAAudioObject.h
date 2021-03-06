//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface YXPAAudioObject : NSObject
{
    NSString *_iconURL;
    NSString *_paID;
    NSString *_audioURL;
    NSNumber *_audioDuration;
}

+ (id)object;
@property(retain, nonatomic) NSNumber *audioDuration; // @synthesize audioDuration=_audioDuration;
@property(retain, nonatomic) NSString *audioURL; // @synthesize audioURL=_audioURL;
@property(retain, nonatomic) NSString *paID; // @synthesize paID=_paID;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)decodeFromNSDict:(id)arg1;
- (id)encodeToNSDict;
- (void)dealloc;
- (id)init;

@end

