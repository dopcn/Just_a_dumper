//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CDVInvokedUrlCommand;

@interface AlipayInfoManager : NSObject
{
    CDVInvokedUrlCommand *_currentCommand;
}

+ (id)shareInstance;
@property(retain, nonatomic) CDVInvokedUrlCommand *currentCommand; // @synthesize currentCommand=_currentCommand;
- (void).cxx_destruct;
- (id)parser:(id)arg1;
- (_Bool)processURL:(id)arg1;
- (id)init;

@end

