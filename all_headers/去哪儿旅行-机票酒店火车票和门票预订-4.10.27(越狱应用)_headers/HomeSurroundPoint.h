//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HomeSurroundPoint : NSObject
{
    NSString *_addr;
    NSString *_distance;
    NSString *_name;
    NSString *_poiType;
    NSString *_tel;
}

@property(readonly, nonatomic, getter=phoneNumber) NSString *tel; // @synthesize tel=_tel;
@property(readonly, nonatomic, getter=pointType) NSString *poiType; // @synthesize poiType=_poiType;
@property(readonly, nonatomic, getter=name) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic, getter=distance) NSString *distance; // @synthesize distance=_distance;
@property(readonly, nonatomic, getter=address) NSString *addr; // @synthesize addr=_addr;
- (void).cxx_destruct;

@end

