//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class NSArray, NSString;
@protocol MTPassbookServiceProtocol;

@interface MAYAddPassbookItem : MTTableViewItem
{
    NSString *_eventName;
    id <MTPassbookServiceProtocol> _passbookService;
    CDUnknownBlockType _passesDidReturnBlock;
    NSArray *_passbookInfos;
}

@property(retain, nonatomic) NSArray *passbookInfos; // @synthesize passbookInfos=_passbookInfos;
@property(copy, nonatomic) CDUnknownBlockType passesDidReturnBlock; // @synthesize passesDidReturnBlock=_passesDidReturnBlock;
@property(retain, nonatomic) id <MTPassbookServiceProtocol> passbookService; // @synthesize passbookService=_passbookService;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;

@end

