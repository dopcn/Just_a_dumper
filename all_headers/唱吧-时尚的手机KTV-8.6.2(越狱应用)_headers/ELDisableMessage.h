//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ELBaseMessage.h"

@class NSString;

@interface ELDisableMessage : ELBaseMessage
{
    NSString *_targetUserid;
    double _banChatTime;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (void)load;
@property(nonatomic) double banChatTime; // @synthesize banChatTime=_banChatTime;
@property(copy, nonatomic) NSString *targetUserid; // @synthesize targetUserid=_targetUserid;
- (void).cxx_destruct;

@end

