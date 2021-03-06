//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseModel.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface CCBBaseChanelModel : CCBBaseModel <NSCoding>
{
    unsigned char _isDragable;
    long long _chanelTag;
    NSString *_channelTitle;
    NSString *_tagString;
}

@property(retain, nonatomic) NSString *tagString; // @synthesize tagString=_tagString;
@property(retain, nonatomic) NSString *channelTitle; // @synthesize channelTitle=_channelTitle;
@property(nonatomic) long long chanelTag; // @synthesize chanelTag=_chanelTag;
@property(nonatomic) unsigned char isDragable; // @synthesize isDragable=_isDragable;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

