//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDIMCellsManager : NSObject
{
    _Bool _isEditable;
}

+ (struct CGSize)getCellContentSize:(id)arg1;
+ (Class)getModelCellClass:(id)arg1;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
- (id)getTalkVCCellByModel:(id)arg1 tableView:(id)arg2 inParent:(id)arg3;
- (void)registerCellForReuse:(id)arg1 parentVC:(id)arg2;
- (void)dealloc;

@end

