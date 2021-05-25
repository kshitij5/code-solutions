class Solution {
    public static boolean canFormArray(int[] arr, int[][] pieces) {
        int[] temp_pieces;
        boolean canFormPieces = false;

        for (int i = 0; i < pieces.length; i++) {
            for (int j = 0; j < pieces[i].length; j++) {
                System.out.print(pieces[i][j]);
            }
        }
        return canFormPieces;
    }

    public static void main(String[] args) {
        int arr[] = { 0, 1, 2, 3, 4, 5 };
        int pieces[][] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };

        boolean canFormArray = canFormArray(arr, pieces);
        System.out.println(canFormArray);
    }
}