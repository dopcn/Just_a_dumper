//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GJLSCarRentalCarListEntity;

@interface GJLSCarRentalAbstract : UIView
{
    double _yPosition;
    GJLSCarRentalCarListEntity *_myEntity;
    CDUnknownBlockType _myBlock;
}

@property(copy, nonatomic) CDUnknownBlockType myBlock; // @synthesize myBlock=_myBlock;
@property(retain, nonatomic) GJLSCarRentalCarListEntity *myEntity; // @synthesize myEntity=_myEntity;
@property(nonatomic) double yPosition; // @synthesize yPosition=_yPosition;
- (void).cxx_destruct;
- (void)buttonDidClicked:(id)arg1;
- (void)addSubViews:(id)arg1;
- (id)initWithData:(id)arg1 callBack:(CDUnknownBlockType)arg2;

@end

