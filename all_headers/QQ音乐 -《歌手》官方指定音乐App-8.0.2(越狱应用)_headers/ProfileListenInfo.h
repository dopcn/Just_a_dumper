//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMBaseModel.h"

@class NSString;

@interface ProfileListenInfo : QMBaseModel
{
    NSString *_iconUrl;
    NSString *_jumpUrl;
    NSString *_jumpKey;
}

+ (id)translateFromJsonData:(id)arg1;
@property(retain, nonatomic) NSString *jumpKey; // @synthesize jumpKey=_jumpKey;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;

@end

