//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPCTableViewCell.h"

@class LVHomePageAllPictureCellObject, UILabel;

@interface LVHomePageAllPictureCell : IPCTableViewCell
{
    LVHomePageAllPictureCellObject *_object;
    UILabel *_allPicLabel;
}

+ (double)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
@property(retain, nonatomic) UILabel *allPicLabel; // @synthesize allPicLabel=_allPicLabel;
@property(retain, nonatomic) LVHomePageAllPictureCellObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

