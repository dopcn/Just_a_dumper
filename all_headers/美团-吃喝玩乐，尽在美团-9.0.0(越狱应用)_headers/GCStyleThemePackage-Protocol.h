//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol GCStyleThemePackage <NSObject>
@property(nonatomic) struct GCCellMarginStruct cellMarginRight;
@property(nonatomic) struct GCCellMarginStruct cellMarginLeft;
@property(retain, nonatomic) UIImage *loadingCellImage;
@property(copy, nonatomic) NSString *loadingCellContent;
@property(nonatomic) Class loadingEmptyViewClass;
@property(nonatomic) Class pullRefreshViewClass;
@property(nonatomic) Class loadingFailViewClass;
@property(nonatomic) Class loadingViewClass;
@end

