//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCBaseComponent.h"

@class DCHomePromptBar;
@protocol DCHomePromptComDelegate;

@interface DCHomePromptCom : DCBaseComponent
{
    long long _role;
    DCHomePromptBar *_promptBar;
}

@property(retain, nonatomic) DCHomePromptBar *promptBar; // @synthesize promptBar=_promptBar;
@property(nonatomic) long long role; // @synthesize role=_role;
- (void).cxx_destruct;
- (void)listDataUpdate:(id)arg1;
- (void)hReachabilityChanged:(id)arg1;
@property(nonatomic) __weak id <DCHomePromptComDelegate> delegate; // @dynamic delegate;
- (int)type;
- (id)initWithCompType:(int)arg1;

@end

