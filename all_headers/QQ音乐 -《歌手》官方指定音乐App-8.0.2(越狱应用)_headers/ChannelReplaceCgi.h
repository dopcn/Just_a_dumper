//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CgiInfo.h"

@class ChannelItem;

@interface ChannelReplaceCgi : CgiInfo
{
    ChannelItem *_orginalItem;
    ChannelItem *_replaceItem;
}

+ (id)translateToChannelItem:(id)arg1 originalItem:(id)arg2;
@property(retain, nonatomic) ChannelItem *replaceItem; // @synthesize replaceItem=_replaceItem;
@property(retain, nonatomic) ChannelItem *orginalItem; // @synthesize orginalItem=_orginalItem;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

