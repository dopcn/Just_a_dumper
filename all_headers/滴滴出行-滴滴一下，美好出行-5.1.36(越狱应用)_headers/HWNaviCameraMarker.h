//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HWNaviCameraMarker : NSObject
{
    int _index;
    int _type;
    unsigned int _speed;
    unsigned int _priority;
    struct _DDMapPoint _routePoint;
}

@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) struct _DDMapPoint routePoint; // @synthesize routePoint=_routePoint;
@property(nonatomic) unsigned int speed; // @synthesize speed=_speed;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int index; // @synthesize index=_index;
- (void)configWithItemSpeed:(struct DMapIconInfo *)arg1 isRight:(_Bool)arg2;
- (void)configWithItem:(struct DMapIconInfo *)arg1 isRight:(_Bool)arg2;
- (_Bool)isEqualToOtherMarker:(id)arg1;
- (void)dealloc;
- (id)init;

@end

