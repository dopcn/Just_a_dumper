//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MJMultiScreenAdapterBase : NSObject
{
    double _widthRatioToIp5;
    double _heightRatioToIp5;
}

@property(nonatomic) double heightRatioToIp5; // @synthesize heightRatioToIp5=_heightRatioToIp5;
@property(nonatomic) double widthRatioToIp5; // @synthesize widthRatioToIp5=_widthRatioToIp5;
- (struct CGSize)adaptSize:(struct CGSize)arg1;
- (struct CGPoint)adaptPoint:(struct CGPoint)arg1;
- (struct CGRect)adaptRect:(struct CGRect)arg1;
- (id)init;

@end

