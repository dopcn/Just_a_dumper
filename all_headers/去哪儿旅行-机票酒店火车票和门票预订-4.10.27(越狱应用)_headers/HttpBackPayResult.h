//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HttpBackPayResult : NSObject
{
    NSString *_flag;
    NSString *_status;
    NSString *_statusmsg;
    NSString *_respData;
}

@property(retain, nonatomic) NSString *respData; // @synthesize respData=_respData;
@property(readonly, nonatomic, getter=statusmsg) NSString *statusmsg; // @synthesize statusmsg=_statusmsg;
@property(readonly, nonatomic, getter=status) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic, getter=flag) NSString *flag; // @synthesize flag=_flag;
- (void).cxx_destruct;

@end

