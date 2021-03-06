//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APVector3 : NSObject
{
    double x;
    double y;
    double z;
}

+ (id)vector3WithVector3:(id)arg1;
+ (id)vector3WithPosition:(struct APVertex)arg1;
+ (id)vector3WithVertex:(struct APVertex)arg1;
+ (id)vector3WithX:(double)arg1 y:(double)arg2 z:(double)arg3;
+ (id)vector3;
@property(nonatomic) double z; // @synthesize z;
@property(nonatomic) double y; // @synthesize y;
@property(nonatomic) double x; // @synthesize x;
- (id)clone;
- (void)normalize;
- (double)distance:(id)arg1;
- (double)magnitude;
- (id)crossProduct:(id)arg1;
- (double)dot:(id)arg1;
- (id)multf:(double)arg1;
- (id)mult:(id)arg1;
- (id)divf:(double)arg1;
- (id)div:(id)arg1;
- (id)minus;
- (id)sub:(id)arg1;
- (id)add:(id)arg1;
- (_Bool)equals:(id)arg1;
- (void)setValues:(double *)arg1;
- (void)setValuesWithPosition:(struct APVertex)arg1;
- (void)setValuesWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
@property(readonly, nonatomic, getter=getPosition) struct APVertex position;
- (id)initWithVector3:(id)arg1;
- (id)initWithPosition:(struct APVertex)arg1;
- (id)initWithVertex:(struct APVertex)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)init;

@end

