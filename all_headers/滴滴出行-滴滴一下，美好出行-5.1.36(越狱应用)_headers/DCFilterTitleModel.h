//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DCFilterModelProtocol-Protocol.h"

@class NSAttributedString, NSString;

@interface DCFilterTitleModel : NSObject <DCFilterModelProtocol>
{
    NSAttributedString *_title;
}

@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

