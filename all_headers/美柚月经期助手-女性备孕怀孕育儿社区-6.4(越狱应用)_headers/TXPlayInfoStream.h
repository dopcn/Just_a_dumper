//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TXPlayInfoStream : NSObject
{
    int _height;
    int _width;
    int _size;
    int _bitrate;
    int _duration;
    NSString *_url;
}

@property int duration; // @synthesize duration=_duration;
@property int bitrate; // @synthesize bitrate=_bitrate;
@property int size; // @synthesize size=_size;
@property int width; // @synthesize width=_width;
@property int height; // @synthesize height=_height;
@property(retain) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

