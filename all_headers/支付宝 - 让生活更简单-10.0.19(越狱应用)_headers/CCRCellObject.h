//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITableViewCell;

@interface CCRCellObject : NSObject
{
    int _cellHeight;
    int _layoutObjectIndex;
    UITableViewCell *_tableViewCell;
    CDUnknownBlockType _operationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(nonatomic) int layoutObjectIndex; // @synthesize layoutObjectIndex=_layoutObjectIndex;
@property(retain, nonatomic) UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
@property(nonatomic) int cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (id)init;

@end

