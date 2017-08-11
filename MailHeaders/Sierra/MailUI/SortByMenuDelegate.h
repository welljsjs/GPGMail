//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSMenuDelegate.h"

@class NSMenuItem, NSString;

@interface SortByMenuDelegate : NSObject <NSMenuDelegate>
{
    NSMenuItem *_ascendingMenuItem;	// 8 = 0x8
    NSMenuItem *_descendingMenuItem;	// 16 = 0x10
}

@property(nonatomic) __weak NSMenuItem *descendingMenuItem; // @synthesize descendingMenuItem=_descendingMenuItem;
@property(nonatomic) __weak NSMenuItem *ascendingMenuItem; // @synthesize ascendingMenuItem=_ascendingMenuItem;
- (void).cxx_destruct;	// IMP=0x00000001002a83c8
- (void)menuWillOpen:(id)arg1;	// IMP=0x00000001002a82ec
- (void)menuNeedsUpdate:(id)arg1;	// IMP=0x0000000100076750

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
