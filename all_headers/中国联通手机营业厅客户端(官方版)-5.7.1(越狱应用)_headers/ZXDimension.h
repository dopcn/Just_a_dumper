//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ZXDimension : NSObject
{
    int _height;
    int _width;
}

@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2;

@end

