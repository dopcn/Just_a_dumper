//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VBoxInfo : NSObject
{
    NSString *_sn;
    NSString *_nickname;
    NSString *_vboxid;
    NSString *_appid;
    NSString *_bizid;
}

@property(retain, nonatomic) NSString *bizid; // @synthesize bizid=_bizid;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *vboxid; // @synthesize vboxid=_vboxid;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *sn; // @synthesize sn=_sn;
- (void).cxx_destruct;

@end

