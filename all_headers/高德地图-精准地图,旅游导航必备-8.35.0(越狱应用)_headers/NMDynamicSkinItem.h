//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface NMDynamicSkinItem : NSObject <NSCoding>
{
    NSString *skinItemID;
    NSString *skinItemIcon;
    NSString *skinItemName;
    NSNumber *skinItemNew;
}

@property(retain, nonatomic) NSNumber *skinItemNew; // @synthesize skinItemNew;
@property(retain, nonatomic) NSString *skinItemName; // @synthesize skinItemName;
@property(retain, nonatomic) NSString *skinItemIcon; // @synthesize skinItemIcon;
@property(retain, nonatomic) NSString *skinItemID; // @synthesize skinItemID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

