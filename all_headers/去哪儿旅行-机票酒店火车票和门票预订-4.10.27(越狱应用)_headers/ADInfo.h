//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface ADInfo : NSObject
{
    NSString *_name;
    NSNumber *_local;
    NSString *_adUrl;
    NSNumber *_btnClose;
}

@property(readonly, nonatomic, getter=isCloseBtnShow) NSNumber *btnClose; // @synthesize btnClose=_btnClose;
@property(readonly, nonatomic, getter=adUrl320) NSString *adUrl; // @synthesize adUrl=_adUrl;
@property(readonly, nonatomic, getter=adLocIndex) NSNumber *local; // @synthesize local=_local;
@property(readonly, nonatomic, getter=adLocName) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

