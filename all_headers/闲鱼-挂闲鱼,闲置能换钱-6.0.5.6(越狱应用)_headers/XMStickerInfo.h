//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "XMStickerInfo-Protocol.h"

@class NSString;

@interface XMStickerInfo : NSObject <XMStickerInfo>
{
    NSString *_url;
    double _width;
    double _rotate;
    double _height;
    double _left;
    double _top;
}

@property(nonatomic) double top; // @synthesize top=_top;
@property(nonatomic) double left; // @synthesize left=_left;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

